class CircularQueue {

    private int front, rear, cap;
    private int[] arr;

    public CircularQueue(int size) {
        cap = size;
        front = rear = -1;
        arr = new int[size];
    }

    public boolean empty() {
        return front == -1;
    }

    public boolean full() {
        return (front == 0 && rear == cap - 1) || (front == rear + 1);
    }

    public int peak() {
        if (empty()) {
            System.out.println("UNDERFLOW");
            return -999999;
        }
        return arr[front];
    }

    public static void main(String[] args) {
        CircularQueue queue = new CircularQueue(5);
        System.out.println(queue.peak());

    }
}
